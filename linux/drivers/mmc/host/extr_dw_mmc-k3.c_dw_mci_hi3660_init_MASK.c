
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_mci {int bus_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dw_mci*,int ,int) ;
 int FUNC_2 (struct dw_mci*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dw_mci *VAR_5)
{
 FUNC_2(VAR_5, VAR_0, FUNC_0(VAR_3,
      VAR_4));

 FUNC_1(VAR_5, VAR_2, -1);
 VAR_5->bus_hz /= (VAR_1 + 1);

 return 0;
}
