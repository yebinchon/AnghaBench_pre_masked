
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct img_spfi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct img_spfi*,int ) ;
 int FUNC_1 (struct img_spfi*,int,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct img_spfi *VAR_4, u8 *VAR_5,
       unsigned int VAR_6)
{
 unsigned int VAR_7 = 0;
 u32 VAR_8;

 while (VAR_7 < VAR_6) {
  FUNC_1(VAR_4, VAR_1,
       VAR_0);
  VAR_8 = FUNC_0(VAR_4, VAR_2);
  if (!(VAR_8 & VAR_1))
   break;
  VAR_5[VAR_7] = FUNC_0(VAR_4, VAR_3);
  VAR_7++;
 }

 return VAR_7;
}
