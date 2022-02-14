
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_flags_t ;
struct seq_file {int dummy; } ;
typedef int dev_t ;


 unsigned long long FUNC_0 (int ) ;
 unsigned long long FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct seq_file*,char*,unsigned long) ;
 int FUNC_3 (struct seq_file*,char*,unsigned long long,int) ;
 int FUNC_4 (struct seq_file*,char) ;
 int FUNC_5 (struct seq_file*,int) ;

__attribute__((used)) static void FUNC_6(struct seq_file *VAR_4,
       unsigned long VAR_5, unsigned long VAR_6,
       vm_flags_t VAR_7, unsigned long long VAR_8,
       dev_t VAR_9, unsigned long VAR_10)
{
 FUNC_5(VAR_4, 25 + sizeof(void *) * 6 - 1);
 FUNC_3(VAR_4, ((void*)0), VAR_5, 8);
 FUNC_3(VAR_4, "-", VAR_6, 8);
 FUNC_4(VAR_4, ' ');
 FUNC_4(VAR_4, VAR_7 & VAR_2 ? 'r' : '-');
 FUNC_4(VAR_4, VAR_7 & VAR_3 ? 'w' : '-');
 FUNC_4(VAR_4, VAR_7 & VAR_0 ? 'x' : '-');
 FUNC_4(VAR_4, VAR_7 & VAR_1 ? 's' : 'p');
 FUNC_3(VAR_4, " ", VAR_8, 8);
 FUNC_3(VAR_4, " ", FUNC_0(VAR_9), 2);
 FUNC_3(VAR_4, ":", FUNC_1(VAR_9), 2);
 FUNC_2(VAR_4, " ", VAR_10);
 FUNC_4(VAR_4, ' ');
}
