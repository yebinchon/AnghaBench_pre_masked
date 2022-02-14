
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_xattr_ref {int xseqno; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct jffs2_xattr_ref *VAR_1)
{
 return ((VAR_1->xseqno & VAR_0) != 0);
}
