
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int val ;
struct socket {TYPE_3__* ops; TYPE_2__* sk; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int ss_family; } ;
struct TCP_Server_Info {struct socket* ssocket; scalar_t__ noblockcnt; scalar_t__ tcp_nodelay; scalar_t__ noautotune; TYPE_1__ dstaddr; } ;
typedef scalar_t__ __be16 ;
struct TYPE_6__ {int (* connect ) (struct socket*,struct sockaddr*,int,int ) ;} ;
struct TYPE_5__ {int sk_rcvtimeo; int sk_sndtimeo; int sk_sndbuf; int sk_rcvbuf; int sk_allocation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int,int ,int ,struct socket**,int) ;
 int FUNC_1 (struct TCP_Server_Info*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct TCP_Server_Info*) ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (int ,char*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct TCP_Server_Info*) ;
 int FUNC_9 (struct socket*,int ,int ,char*,int) ;
 int FUNC_10 (struct socket*) ;
 int FUNC_11 (struct socket*,struct sockaddr*,int,int ) ;

__attribute__((used)) static int
FUNC_12(struct TCP_Server_Info *VAR_13)
{
 int VAR_14 = 0;
 __be16 VAR_15;
 int VAR_16, VAR_17;
 struct socket *VAR_18 = VAR_13->ssocket;
 struct sockaddr *VAR_19;

 VAR_19 = (struct sockaddr *) &VAR_13->dstaddr;

 if (VAR_13->dstaddr.ss_family == VAR_1) {
  VAR_15 = ((struct sockaddr_in6 *) VAR_19)->sin6_port;
  VAR_16 = sizeof(struct sockaddr_in6);
  VAR_17 = VAR_1;
 } else {
  VAR_15 = ((struct sockaddr_in *) VAR_19)->sin_port;
  VAR_16 = sizeof(struct sockaddr_in);
  VAR_17 = VAR_0;
 }

 if (VAR_18 == ((void*)0)) {
  VAR_14 = FUNC_0(FUNC_3(VAR_13), VAR_17, VAR_9,
       VAR_6, &VAR_18, 1);
  if (VAR_14 < 0) {
   FUNC_6(VAR_12, "Error %d creating socket\n", VAR_14);
   VAR_13->ssocket = ((void*)0);
   return VAR_14;
  }


  FUNC_2(VAR_3, "Socket created\n");
  VAR_13->ssocket = VAR_18;
  VAR_18->sk->sk_allocation = VAR_4;
  if (VAR_17 == VAR_1)
   FUNC_5(VAR_18);
  else
   FUNC_4(VAR_18);
 }

 VAR_14 = FUNC_1(VAR_13);
 if (VAR_14 < 0)
  return VAR_14;






 VAR_18->sk->sk_rcvtimeo = 7 * VAR_5;
 VAR_18->sk->sk_sndtimeo = 5 * VAR_5;


 if (VAR_13->noautotune) {
  if (VAR_18->sk->sk_sndbuf < (200 * 1024))
   VAR_18->sk->sk_sndbuf = 200 * 1024;
  if (VAR_18->sk->sk_rcvbuf < (140 * 1024))
   VAR_18->sk->sk_rcvbuf = 140 * 1024;
 }

 if (VAR_13->tcp_nodelay) {
  int VAR_20 = 1;
  VAR_14 = FUNC_9(VAR_18, VAR_10, VAR_11,
    (char *)&VAR_20, sizeof(VAR_20));
  if (VAR_14)
   FUNC_2(VAR_3, "set TCP_NODELAY socket option error %d\n",
     VAR_14);
 }

 FUNC_2(VAR_3, "sndbuf %d rcvbuf %d rcvtimeo 0x%lx\n",
   VAR_18->sk->sk_sndbuf,
   VAR_18->sk->sk_rcvbuf, VAR_18->sk->sk_rcvtimeo);

 VAR_14 = VAR_18->ops->connect(VAR_18, VAR_19, VAR_16,
      VAR_13->noblockcnt ? VAR_7 : 0);





 if (VAR_13->noblockcnt && VAR_14 == -VAR_2)
  VAR_14 = 0;
 if (VAR_14 < 0) {
  FUNC_2(VAR_3, "Error %d connecting to server\n", VAR_14);
  FUNC_10(VAR_18);
  VAR_13->ssocket = ((void*)0);
  return VAR_14;
 }

 if (VAR_15 == FUNC_7(VAR_8))
  VAR_14 = FUNC_8(VAR_13);

 return VAR_14;
}
