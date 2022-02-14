
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_info {int func_info_rec_size; int line_info_rec_size; int jited_line_info_rec_size; scalar_t__ nr_jited_line_info; scalar_t__ nr_line_info; scalar_t__ nr_func_info; } ;
struct bpf_line_info {int dummy; } ;
struct bpf_func_info {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct bpf_prog_info *VAR_1)
{
 if ((VAR_1->nr_func_info || VAR_1->func_info_rec_size) &&
     VAR_1->func_info_rec_size != sizeof(struct bpf_func_info))
  return -VAR_0;

 if ((VAR_1->nr_line_info || VAR_1->line_info_rec_size) &&
     VAR_1->line_info_rec_size != sizeof(struct bpf_line_info))
  return -VAR_0;

 if ((VAR_1->nr_jited_line_info || VAR_1->jited_line_info_rec_size) &&
     VAR_1->jited_line_info_rec_size != sizeof(__u64))
  return -VAR_0;

 VAR_1->func_info_rec_size = sizeof(struct bpf_func_info);
 VAR_1->line_info_rec_size = sizeof(struct bpf_line_info);
 VAR_1->jited_line_info_rec_size = sizeof(__u64);

 return 0;
}
