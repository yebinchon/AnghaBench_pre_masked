
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int free; int flags; } ;
struct ubifs_info {int ihead_lnum; } ;


 scalar_t__ FUNC_0 (struct ubifs_lprops const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ubifs_lprops const*) ;
 struct ubifs_lprops* FUNC_2 (struct ubifs_info*,struct ubifs_lprops const*,int ,int ,int,int ) ;
 int FUNC_3 (struct ubifs_info*) ;
 struct ubifs_lprops* FUNC_4 (struct ubifs_info*,int ) ;
 int FUNC_5 (struct ubifs_info*) ;

__attribute__((used)) static int FUNC_6(struct ubifs_info *VAR_2)
{
 const struct ubifs_lprops *VAR_3;
 int VAR_4, VAR_5;

 FUNC_3(VAR_2);

 VAR_3 = FUNC_4(VAR_2, VAR_2->ihead_lnum);
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  goto out;
 }

 VAR_5 = VAR_3->free;

 VAR_3 = FUNC_2(VAR_2, VAR_3, VAR_0, VAR_0,
        VAR_3->flags | VAR_1, 0);
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  goto out;
 }

 VAR_4 = VAR_5;
out:
 FUNC_5(VAR_2);
 return VAR_4;
}
