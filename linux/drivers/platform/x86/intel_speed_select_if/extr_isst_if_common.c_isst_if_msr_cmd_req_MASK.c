
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct isst_if_msr_cmd {scalar_t__ logical_cpu; int data; int msr; scalar_t__ read_write; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__,int ,int *) ;
 int FUNC_4 (scalar_t__,int ,int ) ;

__attribute__((used)) static long FUNC_5(u8 *VAR_4, int *VAR_5, int VAR_6)
{
 struct isst_if_msr_cmd *VAR_7;
 int VAR_8;

 VAR_7 = (struct isst_if_msr_cmd *)VAR_4;

 if (!FUNC_2(VAR_7->msr))
  return -VAR_1;

 if (VAR_7->logical_cpu >= VAR_3)
  return -VAR_1;

 if (VAR_7->read_write) {
  if (!FUNC_0(VAR_0))
   return -VAR_2;

  VAR_8 = FUNC_4(VAR_7->logical_cpu,
      VAR_7->msr,
      VAR_7->data);
  *VAR_5 = 1;
  if (!VAR_8 && !VAR_6)
   VAR_8 = FUNC_1(0, VAR_7->msr,
          VAR_7->logical_cpu,
          0, 0, VAR_7->data);
 } else {
  u64 VAR_9;

  VAR_8 = FUNC_3(VAR_7->logical_cpu,
      VAR_7->msr, &VAR_9);
  if (!VAR_8) {
   VAR_7->data = VAR_9;
   *VAR_5 = 0;
  }
 }


 return VAR_8;
}
