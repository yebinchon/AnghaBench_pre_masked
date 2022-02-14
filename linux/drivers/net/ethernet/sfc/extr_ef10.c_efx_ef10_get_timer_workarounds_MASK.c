
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int net_dev; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int workaround_35388; int workaround_61265; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct efx_nic*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct efx_nic*,int ,int,int *) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_5)
{
 struct efx_ef10_nic_data *VAR_6 = VAR_5->nic_data;
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_6->workaround_35388 = 0;
 VAR_6->workaround_61265 = 0;

 VAR_9 = FUNC_0(VAR_5, &VAR_7, &VAR_8);

 if (VAR_9 == -VAR_0) {

  VAR_9 = 0;
 } else if (VAR_9 == 0) {

  if (VAR_8 & VAR_2)
   VAR_6->workaround_61265 = 1;

  if (VAR_8 & VAR_1) {
   VAR_6->workaround_35388 = 1;
  } else if (VAR_7 & VAR_1) {



   VAR_9 = FUNC_1(VAR_5,
           VAR_3,
           1, ((void*)0));
   if (VAR_9 == 0)
    VAR_6->workaround_35388 = 1;

   VAR_9 = 0;
  }
 }

 FUNC_2(VAR_5, VAR_4, VAR_5->net_dev,
    "workaround for bug 35388 is %sabled\n",
    VAR_6->workaround_35388 ? "en" : "dis");
 FUNC_2(VAR_5, VAR_4, VAR_5->net_dev,
    "workaround for bug 61265 is %sabled\n",
    VAR_6->workaround_61265 ? "en" : "dis");

 return VAR_9;
}
