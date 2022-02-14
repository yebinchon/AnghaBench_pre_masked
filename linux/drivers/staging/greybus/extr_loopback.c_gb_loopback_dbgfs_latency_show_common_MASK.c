
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct mutex {int dummy; } ;
struct kfifo {int dummy; } ;
typedef int latency ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kfifo*) ;
 int FUNC_1 (struct kfifo*,int *,int) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1,
       struct kfifo *VAR_2,
       struct mutex *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 if (FUNC_0(VAR_2) == 0) {
  VAR_5 = -VAR_0;
  goto done;
 }

 FUNC_2(VAR_3);
 VAR_5 = FUNC_1(VAR_2, &VAR_4, sizeof(VAR_4));
 if (VAR_5 > 0) {
  FUNC_4(VAR_1, "%u", VAR_4);
  VAR_5 = 0;
 }
 FUNC_3(VAR_3);
done:
 return VAR_5;
}
