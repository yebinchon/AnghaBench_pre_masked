
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 () ;
 long FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,long,...) ;

__attribute__((used)) static inline long FUNC_3(s64 VAR_1, u64 VAR_2, u64 VAR_3,
          u64 VAR_4, u64 VAR_5)
{
 long VAR_6 = 0;


 FUNC_0();
 FUNC_2("ibmvmc: h_copy_rdma(0x%llx, 0x%llx, 0x%llx, 0x%llx, 0x%llx\n",
   VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
    VAR_4, VAR_5);
 FUNC_2("ibmvmc: h_copy_rdma rc = 0x%lx\n", VAR_6);

 return VAR_6;
}
