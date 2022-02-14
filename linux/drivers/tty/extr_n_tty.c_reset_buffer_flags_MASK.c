
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n_tty_data {scalar_t__ push; int read_flags; scalar_t__ erasing; scalar_t__ line_start; scalar_t__ commit_head; scalar_t__ read_tail; scalar_t__ canon_head; scalar_t__ read_head; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct n_tty_data *VAR_1)
{
 VAR_1->read_head = VAR_1->canon_head = VAR_1->read_tail = 0;
 VAR_1->commit_head = 0;
 VAR_1->line_start = 0;

 VAR_1->erasing = 0;
 FUNC_0(VAR_1->read_flags, VAR_0);
 VAR_1->push = 0;
}
