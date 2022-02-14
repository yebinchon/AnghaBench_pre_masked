
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scif_epd_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(scif_epd_t VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = -VAR_0;

 if (VAR_3 < 0)
  goto err_ret;
 if (VAR_4 && (!(VAR_4 & VAR_1)))
  goto err_ret;
 VAR_5 = 0;
err_ret:
 return VAR_5;
}
