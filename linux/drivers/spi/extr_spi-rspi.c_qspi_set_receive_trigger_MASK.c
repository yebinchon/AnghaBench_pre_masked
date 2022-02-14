
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rspi_data {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (struct rspi_data*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rspi_data *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_0);

 if (VAR_6 >= VAR_0) {

  FUNC_1(VAR_5, VAR_4,
        VAR_3, VAR_1);
 } else {

  FUNC_1(VAR_5, VAR_4,
        VAR_2, VAR_1);
 }
 return VAR_7;
}
