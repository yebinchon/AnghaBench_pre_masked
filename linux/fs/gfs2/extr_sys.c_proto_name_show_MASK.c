
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm_lockops {char* lm_proto_name; } ;
struct TYPE_2__ {struct lm_lockops* ls_ops; } ;
struct gfs2_sbd {TYPE_1__ sd_lockstruct; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct gfs2_sbd *VAR_0, char *VAR_1)
{
 const struct lm_lockops *VAR_2 = VAR_0->sd_lockstruct.ls_ops;
 return FUNC_0(VAR_1, "%s\n", VAR_2->lm_proto_name);
}
