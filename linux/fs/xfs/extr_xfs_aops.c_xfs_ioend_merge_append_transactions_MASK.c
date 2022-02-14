
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_ioend {int * io_append_trans; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_ioend*,int ) ;

__attribute__((used)) static void
FUNC_1(
 struct xfs_ioend *VAR_1,
 struct xfs_ioend *VAR_2)
{
 if (!VAR_1->io_append_trans) {
  VAR_1->io_append_trans = VAR_2->io_append_trans;
  VAR_2->io_append_trans = ((void*)0);
 } else {
  FUNC_0(VAR_2, -VAR_0);
 }
}
