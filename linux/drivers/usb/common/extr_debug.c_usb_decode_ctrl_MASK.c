
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int __u8 ;
typedef int __u16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,int,int,int,int,int,int,int,int) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (int ,int ,char*,size_t) ;
 int FUNC_4 (int,int,int ,int ,int ,char*,size_t) ;
 int FUNC_5 (int,int ,int ,char*,size_t) ;
 int FUNC_6 (int ,char*,size_t) ;
 int FUNC_7 (int,int,int ,int ,char*,size_t) ;
 int FUNC_8 (int ,char*,size_t) ;
 int FUNC_9 (int ,int ,char*,size_t) ;
 int FUNC_10 (int ,char*,size_t) ;
 int FUNC_11 (int ,char*,size_t) ;
 int FUNC_12 (int ,int ,char*,size_t) ;

const char *FUNC_13(char *VAR_0, size_t VAR_1, __u8 VAR_2,
       __u8 VAR_3, __u16 VAR_4, __u16 VAR_5,
       __u16 VAR_6)
{
 switch (VAR_3) {
 case 136:
  FUNC_5(VAR_2, VAR_5, VAR_6, VAR_0, VAR_1);
  break;
 case 140:
 case 132:
  FUNC_7(VAR_2, VAR_3, VAR_4,
          VAR_5, VAR_0, VAR_1);
  break;
 case 135:
  FUNC_6(VAR_4, VAR_0, VAR_1);
  break;
 case 138:
 case 133:
  FUNC_4(VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6, VAR_0, VAR_1);
  break;
 case 139:
  FUNC_2(VAR_6, VAR_0, VAR_1);
  break;
 case 134:
  FUNC_8(VAR_4, VAR_0, VAR_1);
  break;
 case 137:
  FUNC_3(VAR_5, VAR_6, VAR_0, VAR_1);
  break;
 case 131:
  FUNC_9(VAR_4, VAR_5, VAR_0, VAR_1);
  break;
 case 128:
  FUNC_12(VAR_5, VAR_6, VAR_0, VAR_1);
  break;
 case 129:
  FUNC_11(VAR_6, VAR_0, VAR_1);
  break;
 case 130:
  FUNC_10(VAR_4, VAR_0, VAR_1);
  break;
 default:
  FUNC_1(VAR_0, VAR_1, "%02x %02x %02x %02x %02x %02x %02x %02x",
    VAR_2, VAR_3,
    (u8)(FUNC_0(VAR_4) & 0xff),
    (u8)(FUNC_0(VAR_4) >> 8),
    (u8)(FUNC_0(VAR_5) & 0xff),
    (u8)(FUNC_0(VAR_5) >> 8),
    (u8)(FUNC_0(VAR_6) & 0xff),
    (u8)(FUNC_0(VAR_6) >> 8));
 }

 return VAR_0;
}
