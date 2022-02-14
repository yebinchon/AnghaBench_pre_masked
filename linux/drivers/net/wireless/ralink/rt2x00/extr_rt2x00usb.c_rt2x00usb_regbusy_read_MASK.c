
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_field32 {int dummy; } ;
struct rt2x00_dev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct rt2x00_dev*,char*,unsigned int const,int ) ;
 int FUNC_1 (int ,struct rt2x00_field32 const) ;
 int FUNC_2 (struct rt2x00_dev*,unsigned int const) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct rt2x00_dev *VAR_4,
      const unsigned int VAR_5,
      const struct rt2x00_field32 VAR_6,
      u32 *VAR_7)
{
 unsigned int VAR_8;

 if (!FUNC_3(VAR_0, &VAR_4->flags))
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  *VAR_7 = FUNC_2(VAR_4, VAR_5);
  if (!FUNC_1(*VAR_7, VAR_6))
   return 1;
  FUNC_4(VAR_2);
 }

 FUNC_0(VAR_4, "Indirect register access failed: offset=0x%.08x, value=0x%.08x\n",
     VAR_5, *VAR_7);
 *VAR_7 = ~0;

 return 0;
}
