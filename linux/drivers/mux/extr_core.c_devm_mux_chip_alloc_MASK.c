
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mux_chip {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct mux_chip* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mux_chip*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct mux_chip**) ;
 struct mux_chip** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct mux_chip**) ;
 struct mux_chip* FUNC_5 (struct device*,unsigned int,size_t) ;

struct mux_chip *FUNC_6(struct device *VAR_3,
         unsigned int VAR_4,
         size_t VAR_5)
{
 struct mux_chip **VAR_6, *VAR_7;

 VAR_6 = FUNC_3(VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_5);
 if (FUNC_1(VAR_7)) {
  FUNC_4(VAR_6);
  return VAR_7;
 }

 *VAR_6 = VAR_7;
 FUNC_2(VAR_3, VAR_6);

 return VAR_7;
}
