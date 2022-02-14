
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mei_hbm_cl_cmd {int me_addr; int host_addr; int hbm_cmd; } ;
struct mei_cl {int dummy; } ;


 int FUNC_0 (struct mei_cl*) ;
 int FUNC_1 (struct mei_cl*) ;
 int FUNC_2 (struct mei_hbm_cl_cmd*,int ,size_t) ;

__attribute__((used)) static inline
void FUNC_3(struct mei_cl *VAR_0, u8 VAR_1, void *VAR_2, size_t VAR_3)
{
 struct mei_hbm_cl_cmd *VAR_4 = VAR_2;

 FUNC_2(VAR_4, 0, VAR_3);

 VAR_4->hbm_cmd = VAR_1;
 VAR_4->host_addr = FUNC_0(VAR_0);
 VAR_4->me_addr = FUNC_1(VAR_0);
}
