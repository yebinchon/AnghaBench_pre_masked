
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_4(struct rt2x00_dev *VAR_6)
{
 __le32 *VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;





 VAR_9 = FUNC_3(VAR_6, VAR_3,
           VAR_5, 0,
           VAR_4, VAR_7, sizeof(*VAR_7),
           VAR_2);
 VAR_8 = FUNC_2(*VAR_7);
 FUNC_0(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 if ((VAR_8 & 0x00000003) == 2)
  return 1;

 return 0;
}
