
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {struct genwqe_dev* private; } ;
struct genwqe_dev {unsigned int num_vfs; int * vf_jobtimeout_msec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct genwqe_dev*,int ,unsigned int) ;
 int FUNC_1 (struct seq_file*,char*,unsigned int,int ,...) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, void *VAR_3)
{
 struct genwqe_dev *VAR_4 = VAR_2->private;
 unsigned int VAR_5;
 u64 VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_1, 0);
 FUNC_1(VAR_2, "  PF   0x%016llx %d msec\n", VAR_6,
     VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_4->num_vfs; VAR_5++) {
  VAR_6 = FUNC_0(VAR_4, VAR_1,
       VAR_5 + 1);
  FUNC_1(VAR_2, "  VF%-2d 0x%016llx %d msec\n", VAR_5, VAR_6,
      VAR_4->vf_jobtimeout_msec[VAR_5]);
 }
 return 0;
}
