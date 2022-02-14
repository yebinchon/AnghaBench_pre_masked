
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int response_code; } ;
typedef int ap_qid_t ;






 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 struct ap_queue_status FUNC_4 (int ,int ,unsigned long*) ;

__attribute__((used)) static int FUNC_5(ap_qid_t VAR_3, int *VAR_4, int *VAR_5,
     unsigned int *VAR_6)
{
 struct ap_queue_status VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 if (!FUNC_3(FUNC_0(VAR_3)))
  return -VAR_1;

 VAR_7 = FUNC_4(VAR_3, FUNC_2(), &VAR_8);
 switch (VAR_7.response_code) {
 case 131:
  *VAR_4 = (int)(VAR_8 & 0xff);
  *VAR_5 = (int)((VAR_8 >> 24) & 0xff);
  *VAR_6 = (unsigned int)(VAR_8 >> 32);

  VAR_9 = (VAR_8 >> 16) & 0xff;

  if ((VAR_8 & (1UL << 57)) && VAR_9 > 0)
   VAR_2 = VAR_9;
  else
   VAR_2 = 15;
  switch (*VAR_5) {





  case 139:
  case 137:
   *VAR_6 |= 0x08000000;
   break;
  case 138:
  case 136:
   *VAR_6 |= 0x10000000;
   break;
  default:
   break;
  }
  return 0;
 case 129:
 case 133:
 case 134:
 case 132:
  return -VAR_1;
 case 128:
 case 130:
 case 135:
  return -VAR_0;
 default:
  FUNC_1();
 }
}
