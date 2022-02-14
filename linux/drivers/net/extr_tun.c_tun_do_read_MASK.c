
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_frame {int dummy; } ;
struct tun_struct {int dummy; } ;
struct tun_file {int dummy; } ;
struct sk_buff {int dummy; } ;
struct iov_iter {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct iov_iter*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,struct tun_struct*,char*) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 struct xdp_frame* FUNC_6 (void*) ;
 int FUNC_7 (struct tun_struct*,struct tun_file*,struct sk_buff*,struct iov_iter*) ;
 int FUNC_8 (struct tun_struct*,struct tun_file*,struct xdp_frame*,struct iov_iter*) ;
 void* FUNC_9 (struct tun_file*,int,int*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct xdp_frame*) ;

__attribute__((used)) static ssize_t FUNC_12(struct tun_struct *VAR_1, struct tun_file *VAR_2,
      struct iov_iter *VAR_3,
      int VAR_4, void *VAR_5)
{
 ssize_t VAR_6;
 int VAR_7;

 FUNC_3(VAR_0, VAR_1, "tun_do_read\n");

 if (!FUNC_1(VAR_3)) {
  FUNC_5(VAR_5);
  return 0;
 }

 if (!VAR_5) {

  VAR_5 = FUNC_9(VAR_2, VAR_4, &VAR_7);
  if (!VAR_5)
   return VAR_7;
 }

 if (FUNC_4(VAR_5)) {
  struct xdp_frame *VAR_8 = FUNC_6(VAR_5);

  VAR_6 = FUNC_8(VAR_1, VAR_2, VAR_8, VAR_3);
  FUNC_11(VAR_8);
 } else {
  struct sk_buff *VAR_9 = VAR_5;

  VAR_6 = FUNC_7(VAR_1, VAR_2, VAR_9, VAR_3);
  if (FUNC_10(VAR_6 < 0))
   FUNC_2(VAR_9);
  else
   FUNC_0(VAR_9);
 }

 return VAR_6;
}
