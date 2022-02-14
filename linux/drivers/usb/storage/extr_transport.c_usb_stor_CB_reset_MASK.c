
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int* iobuf; int ifnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int,int ) ;
 int FUNC_1 (struct us_data*,int ,int,int ,int ,int*,int ) ;

int FUNC_2(struct us_data *VAR_5)
{
 FUNC_0(VAR_5->iobuf, 0xFF, VAR_0);
 VAR_5->iobuf[0] = VAR_1;
 VAR_5->iobuf[1] = 4;
 return FUNC_1(VAR_5, VAR_4,
     VAR_3 | VAR_2,
     0, VAR_5->ifnum, VAR_5->iobuf, VAR_0);
}
