
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct s3c_rtc {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct seq_file*,char*,char*) ;

__attribute__((used)) static void FUNC_2(struct s3c_rtc *VAR_2, struct seq_file *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_2->base + VAR_0);
 VAR_4 &= VAR_1;

 FUNC_1(VAR_3, "periodic_IRQ\t: %s\n", VAR_4 ? "yes" : "no");
}
