
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slic_shmem_data {int link; } ;
struct slic_shmem {struct slic_shmem_data* shmem_data; } ;
struct slic_device {struct slic_shmem shmem; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct slic_device*,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct slic_device *VAR_11)
{
 struct slic_shmem *VAR_12 = &VAR_11->shmem;
 struct slic_shmem_data *VAR_13 = VAR_12->shmem_data;
 unsigned int VAR_14;
 int VAR_15;
 u32 VAR_16;

 VAR_16 = FUNC_0(VAR_13->link);

 if (VAR_16 & VAR_4) {
  if (VAR_16 & VAR_6)
   VAR_15 = VAR_9;
  else if (VAR_16 & VAR_5)
   VAR_15 = VAR_8;
  else
   VAR_15 = VAR_7;

  VAR_14 = (VAR_16 & VAR_3) ? VAR_0 :
       VAR_1;
 } else {
  VAR_14 = VAR_2;
  VAR_15 = VAR_10;
 }
 FUNC_1(VAR_11, VAR_15, VAR_14);
}
