
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_summary {unsigned char version; int ofs_in_node; int nid; } ;
typedef int nid_t ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct f2fs_summary *VAR_0, nid_t VAR_1,
   unsigned int VAR_2, unsigned char VAR_3)
{
 VAR_0->nid = FUNC_1(VAR_1);
 VAR_0->ofs_in_node = FUNC_0(VAR_2);
 VAR_0->version = VAR_3;
}
