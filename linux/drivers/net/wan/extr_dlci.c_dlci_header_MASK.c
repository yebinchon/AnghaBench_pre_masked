
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct frhdr {int PID; int OUI; int NLPID; int pad; int IP_NLPID; int control; } ;
typedef int hdr ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (char*,struct frhdr*,unsigned int) ;
 int FUNC_2 (int ,int ,int) ;
 char* FUNC_3 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, struct net_device *VAR_5,
         unsigned short VAR_6, const void *VAR_7,
         const void *VAR_8, unsigned VAR_9)
{
 struct frhdr VAR_10;
 unsigned int VAR_11;
 char *VAR_12;

 VAR_10.control = VAR_0;
 switch (VAR_6)
 {
  case 128:
   VAR_10.IP_NLPID = VAR_1;
   VAR_11 = sizeof(VAR_10.control) + sizeof(VAR_10.IP_NLPID);
   break;



  default:
   VAR_10.pad = VAR_2;
   VAR_10.NLPID = VAR_3;
   FUNC_2(VAR_10.OUI, 0, sizeof(VAR_10.OUI));
   VAR_10.PID = FUNC_0(VAR_6);
   VAR_11 = sizeof(VAR_10);
   break;
 }

 VAR_12 = FUNC_3(VAR_4, VAR_11);
 if (!VAR_12)
  return 0;

 FUNC_1(VAR_12, &VAR_10, VAR_11);

 return VAR_11;
}
