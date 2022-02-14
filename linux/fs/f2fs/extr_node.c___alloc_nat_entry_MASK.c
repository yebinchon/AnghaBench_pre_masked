
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat_entry {int dummy; } ;
typedef int nid_t ;


 int VAR_0 ;
 struct nat_entry* FUNC_0 (int ,int ) ;
 struct nat_entry* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct nat_entry*) ;
 int FUNC_3 (struct nat_entry*,int ) ;

__attribute__((used)) static struct nat_entry *FUNC_4(nid_t VAR_2, bool VAR_3)
{
 struct nat_entry *VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_0(VAR_1, VAR_0);
 else
  VAR_4 = FUNC_1(VAR_1, VAR_0);
 if (VAR_4) {
  FUNC_3(VAR_4, VAR_2);
  FUNC_2(VAR_4);
 }
 return VAR_4;
}
