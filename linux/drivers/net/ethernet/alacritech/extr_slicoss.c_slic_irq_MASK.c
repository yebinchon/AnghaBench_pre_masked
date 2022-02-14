
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_shmem_data {int isr; } ;
struct slic_shmem {struct slic_shmem_data* shmem_data; } ;
struct slic_device {int napi; struct slic_shmem shmem; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct slic_device*) ;
 int FUNC_3 (struct slic_device*,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct slic_device *VAR_7 = VAR_6;
 struct slic_shmem *VAR_8 = &VAR_7->shmem;
 struct slic_shmem_data *VAR_9 = VAR_8->shmem_data;

 FUNC_3(VAR_7, VAR_3, VAR_2);
 FUNC_2(VAR_7);

 FUNC_4();

 if (!VAR_9->isr) {
  FUNC_0();

  FUNC_3(VAR_7, VAR_4, 0);
  FUNC_2(VAR_7);
  return VAR_1;
 }

 FUNC_1(&VAR_7->napi);

 return VAR_0;
}
