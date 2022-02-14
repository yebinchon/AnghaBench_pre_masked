
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_state {int gs_asid; int gs_asid_limit; int gs_gid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct gru_state*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct gru_state *VAR_2)
{
 int VAR_3;

 VAR_2->gs_asid += VAR_0;
 VAR_3 = VAR_2->gs_asid;
 if (VAR_3 >= VAR_2->gs_asid_limit)
  VAR_3 = FUNC_1(VAR_2, VAR_3);

 FUNC_0(VAR_1, "gid %d, asid 0x%x\n", VAR_2->gs_gid, VAR_3);
 return VAR_3;
}
