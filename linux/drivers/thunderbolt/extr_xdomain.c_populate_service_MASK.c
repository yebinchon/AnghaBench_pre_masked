
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_service {int key; int prtcstns; int prtcrevs; int prtcvers; int prtcid; } ;
struct tb_property_dir {int dummy; } ;
struct TYPE_2__ {int immediate; struct tb_property_dir* dir; } ;
struct tb_property {int key; TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct tb_property* FUNC_1 (struct tb_property_dir*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct tb_service *VAR_3,
       struct tb_property *VAR_4)
{
 struct tb_property_dir *VAR_5 = VAR_4->value.dir;
 struct tb_property *VAR_6;


 VAR_6 = FUNC_1(VAR_5, "prtcid", VAR_2);
 if (VAR_6)
  VAR_3->prtcid = VAR_6->value.immediate;
 VAR_6 = FUNC_1(VAR_5, "prtcvers", VAR_2);
 if (VAR_6)
  VAR_3->prtcvers = VAR_6->value.immediate;
 VAR_6 = FUNC_1(VAR_5, "prtcrevs", VAR_2);
 if (VAR_6)
  VAR_3->prtcrevs = VAR_6->value.immediate;
 VAR_6 = FUNC_1(VAR_5, "prtcstns", VAR_2);
 if (VAR_6)
  VAR_3->prtcstns = VAR_6->value.immediate;

 VAR_3->key = FUNC_0(VAR_4->key, VAR_1);
 if (!VAR_3->key)
  return -VAR_0;

 return 0;
}
