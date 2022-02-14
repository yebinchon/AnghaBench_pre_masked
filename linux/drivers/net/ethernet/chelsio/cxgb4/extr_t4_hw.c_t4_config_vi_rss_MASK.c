
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* defaultq_to_udpen; } ;
struct TYPE_3__ {TYPE_2__ basicvirtual; } ;
struct fw_rss_vi_config_cmd {TYPE_1__ u; void* retval_len16; void* op_to_viid; } ;
struct adapter {int dummy; } ;
typedef int c ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (struct fw_rss_vi_config_cmd) ;
 int VAR_2 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct fw_rss_vi_config_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,int,struct fw_rss_vi_config_cmd*,int,int *) ;

int FUNC_7(struct adapter *VAR_3, int VAR_4, unsigned int VAR_5,
       unsigned int VAR_6, unsigned int VAR_7)
{
 struct fw_rss_vi_config_cmd VAR_8;

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.op_to_viid = FUNC_4(FUNC_0(VAR_2) |
       VAR_0 | VAR_1 |
       FUNC_3(VAR_5));
 VAR_8.retval_len16 = FUNC_4(FUNC_1(VAR_8));
 VAR_8.u.basicvirtual.defaultq_to_udpen = FUNC_4(VAR_6 |
     FUNC_2(VAR_7));
 return FUNC_6(VAR_3, VAR_4, &VAR_8, sizeof(VAR_8), ((void*)0));
}
