
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtu3_file_map {int name; } ;
struct mtu3_ep {int mtu; int name; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct mtu3_file_map*) ;
 struct dentry* FUNC_1 (int ,struct dentry*) ;
 int FUNC_2 (int ,int,struct dentry*,struct mtu3_ep*,int *) ;
 int FUNC_3 (int ,struct mtu3_ep*,struct dentry*) ;
 struct mtu3_file_map* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct mtu3_ep *VAR_2,
           struct dentry *VAR_3)
{
 const struct mtu3_file_map *VAR_4;
 struct dentry *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2->name, VAR_3);
 FUNC_3(VAR_2->mtu, VAR_2, VAR_5);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_4 = &VAR_0[VAR_6];

  FUNC_2(VAR_4->name, 0444, VAR_5,
        VAR_2, &VAR_1);
 }
}
