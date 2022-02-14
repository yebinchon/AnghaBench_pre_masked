
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int vf_count; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,size_t) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct efx_nic*,int ,int ,size_t,int ,size_t,size_t*) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_4(struct efx_nic *VAR_14, bool VAR_15,
          unsigned *VAR_16, unsigned *VAR_17)
{
 FUNC_0(VAR_12, VAR_5);
 FUNC_0(VAR_13, VAR_6);
 unsigned VAR_18, VAR_19;
 size_t VAR_20;
 int VAR_21;

 FUNC_2(VAR_12, VAR_7, VAR_15 ? 1 : 0);
 FUNC_2(VAR_12, VAR_9, VAR_0);
 FUNC_2(VAR_12, VAR_8, VAR_14->vf_count);

 VAR_21 = FUNC_3(VAR_14, VAR_4, VAR_12, VAR_5,
    VAR_13, VAR_6, &VAR_20);
 if (VAR_21)
  return VAR_21;
 if (VAR_20 < VAR_6)
  return -VAR_2;

 VAR_19 = FUNC_1(VAR_13, VAR_10);
 VAR_18 = FUNC_1(VAR_13, VAR_11);
 if (VAR_18 > VAR_1)
  return -VAR_3;

 if (VAR_16)
  *VAR_16 = VAR_18;
 if (VAR_17)
  *VAR_17 = VAR_19;

 return 0;
}
