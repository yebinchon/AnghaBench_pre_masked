
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ipr_ioa_cfg {TYPE_1__* host; } ;
struct TYPE_2__ {int host_no; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static char *FUNC_2(struct ipr_ioa_cfg *VAR_0,
     u8 *VAR_1, char *VAR_2, int VAR_3)
{
 char *VAR_4 = VAR_2;

 *VAR_4 = '\0';
 VAR_4 += FUNC_1(VAR_4, VAR_2 + VAR_3 - VAR_4, "%d/", VAR_0->host->host_no);
 FUNC_0(VAR_1, VAR_4, VAR_3 - (VAR_2 - VAR_4));
 return VAR_2;
}
