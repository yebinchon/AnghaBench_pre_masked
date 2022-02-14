
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vivid_dev {int osd_jiffies; int * osd; } ;
struct cec_msg {int dummy; } ;
struct TYPE_2__ {int * log_addr; } ;
struct cec_adapter {TYPE_1__ log_addrs; } ;



 int VAR_0 ;



 int VAR_1 ;
 struct vivid_dev* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (struct cec_adapter*) ;
 int FUNC_2 (struct cec_msg*) ;
 int FUNC_3 (struct cec_msg*,int,int ) ;
 int FUNC_4 (struct cec_msg*,int ,int ) ;
 int FUNC_5 (struct cec_msg*) ;
 scalar_t__ FUNC_6 (struct cec_msg*) ;
 int FUNC_7 (struct cec_msg*) ;
 int FUNC_8 (struct cec_msg*,int *,char*) ;
 int FUNC_9 (struct cec_adapter*,struct cec_msg*,int) ;
 int VAR_2 ;
 int FUNC_10 (int *,char*,int) ;

__attribute__((used)) static int FUNC_11(struct cec_adapter *VAR_3, struct cec_msg *VAR_4)
{
 struct vivid_dev *VAR_5 = FUNC_0(VAR_3);
 struct cec_msg VAR_6;
 u8 VAR_7 = FUNC_2(VAR_4);
 u8 VAR_8;
 char VAR_9[14];

 if (FUNC_6(VAR_4))
  VAR_7 = VAR_3->log_addrs.log_addr[0];
 FUNC_4(&VAR_6, VAR_7, FUNC_5(VAR_4));

 switch (FUNC_7(VAR_4)) {
 case 131:
  if (!FUNC_1(VAR_3))
   return -VAR_1;
  FUNC_8(VAR_4, &VAR_8, VAR_9);
  switch (VAR_8) {
  case 129:
   FUNC_10(VAR_5->osd, VAR_9, sizeof(VAR_5->osd));
   VAR_5->osd_jiffies = VAR_2;
   break;
  case 128:
   FUNC_10(VAR_5->osd, VAR_9, sizeof(VAR_5->osd));
   VAR_5->osd_jiffies = 0;
   break;
  case 130:
   VAR_5->osd[0] = 0;
   VAR_5->osd_jiffies = 0;
   break;
  default:
   FUNC_3(&VAR_6, FUNC_7(VAR_4),
           VAR_0);
   FUNC_9(VAR_3, &VAR_6, 0);
   break;
  }
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
