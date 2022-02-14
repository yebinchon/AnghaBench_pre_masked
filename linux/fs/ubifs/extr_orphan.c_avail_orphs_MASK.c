
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int orph_lebs; int ohead_lnum; int orph_first; int leb_size; int ohead_offs; } ;
typedef int __le64 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ubifs_info *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_1->orph_lebs - (VAR_1->ohead_lnum - VAR_1->orph_first) - 1;
 VAR_3 = VAR_2 *
        ((VAR_1->leb_size - VAR_0) / sizeof(__le64));
 VAR_4 = VAR_1->leb_size - VAR_1->ohead_offs;
 if (VAR_4 >= VAR_0 + sizeof(__le64))
  VAR_3 += (VAR_4 - VAR_0) / sizeof(__le64);
 return VAR_3;
}
