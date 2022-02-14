
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf2123_data {int map; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcf2123_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, unsigned int VAR_3)
{
 struct pcf2123_data *VAR_4 = FUNC_0(VAR_2);

 return FUNC_1(VAR_4->map, VAR_1, VAR_0,
      VAR_3 ? VAR_0 : 0);
}
