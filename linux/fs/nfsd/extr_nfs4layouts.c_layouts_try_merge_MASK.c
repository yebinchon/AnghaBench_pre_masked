
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_layout_seg {scalar_t__ iomode; scalar_t__ offset; } ;


 scalar_t__ FUNC_0 (struct nfsd4_layout_seg*) ;
 int FUNC_1 (struct nfsd4_layout_seg*,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool
FUNC_4(struct nfsd4_layout_seg *VAR_0, struct nfsd4_layout_seg *VAR_1)
{
 if (VAR_0->iomode != VAR_1->iomode)
  return 0;
 if (FUNC_0(VAR_1) < VAR_0->offset)
  return 0;
 if (FUNC_0(VAR_0) < VAR_1->offset)
  return 0;

 VAR_0->offset = FUNC_3(VAR_0->offset, VAR_1->offset);
 FUNC_1(VAR_0, FUNC_2(FUNC_0(VAR_0), FUNC_0(VAR_1)));
 return 1;
}
