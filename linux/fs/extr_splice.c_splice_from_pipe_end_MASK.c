
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct splice_desc {scalar_t__ need_wakeup; } ;
struct pipe_inode_info {int dummy; } ;


 int FUNC_0 (struct pipe_inode_info*) ;

__attribute__((used)) static void FUNC_1(struct pipe_inode_info *VAR_0, struct splice_desc *VAR_1)
{
 if (VAR_1->need_wakeup)
  FUNC_0(VAR_0);
}
