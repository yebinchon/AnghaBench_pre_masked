
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ssd1307fb_array {int type; } ;


 int VAR_0 ;
 struct ssd1307fb_array* FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static struct ssd1307fb_array *FUNC_1(u32 VAR_1, u8 VAR_2)
{
 struct ssd1307fb_array *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct ssd1307fb_array) + VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->type = VAR_2;

 return VAR_3;
}
