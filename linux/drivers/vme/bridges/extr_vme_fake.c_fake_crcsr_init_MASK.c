
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {struct fake_driver* driver_priv; } ;
struct fake_driver {int crcsr_kernel; int crcsr_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vme_bridge*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct vme_bridge *VAR_3)
{
 u32 VAR_4;
 struct fake_driver *VAR_5;

 VAR_5 = VAR_3->driver_priv;


 VAR_5->crcsr_kernel = FUNC_2(VAR_2, VAR_1);
 VAR_5->crcsr_bus = FUNC_0(VAR_5->crcsr_kernel);
 if (!VAR_5->crcsr_kernel)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3);

 FUNC_3("CR/CSR Offset: %d\n", VAR_4);

 return 0;
}
