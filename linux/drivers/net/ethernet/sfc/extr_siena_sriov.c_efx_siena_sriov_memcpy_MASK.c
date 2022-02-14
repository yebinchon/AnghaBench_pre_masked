
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct efx_nic {int dummy; } ;
struct efx_memcpy_req {unsigned int to_rid; unsigned int to_addr; unsigned int from_rid; unsigned int from_addr; scalar_t__ length; int * from_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int VAR_2 ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (struct efx_nic*,int ,int ,unsigned int,int *,int ,int *) ;
 int VAR_12 ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int *,scalar_t__) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_11(struct efx_nic *VAR_14,
      struct efx_memcpy_req *VAR_15,
      unsigned int VAR_16)
{
 FUNC_1(VAR_12, VAR_1);
 FUNC_2(VAR_13);
 unsigned int VAR_17, VAR_18;
 u64 VAR_19;
 u32 VAR_20;
 int VAR_21;

 FUNC_9();

 if (FUNC_6(VAR_16 > VAR_3))
  return -VAR_0;
 VAR_18 = FUNC_5(VAR_16);

 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  VAR_13 = FUNC_0(VAR_12, VAR_5, VAR_17);
  FUNC_3(VAR_13, VAR_9,
          VAR_16);
  FUNC_3(VAR_13, VAR_11,
          VAR_15->to_rid);
  FUNC_4(VAR_13, VAR_10,
          VAR_15->to_addr);
  if (VAR_15->from_buf == ((void*)0)) {
   VAR_20 = VAR_15->from_rid;
   VAR_19 = VAR_15->from_addr;
  } else {
   if (FUNC_6(VAR_18 + VAR_15->length >
        VAR_1)) {
    VAR_21 = -VAR_0;
    goto out;
   }

   VAR_20 = VAR_4;
   VAR_19 = VAR_18;
   FUNC_10(FUNC_7(VAR_12, VAR_18), VAR_15->from_buf,
          VAR_15->length);
   VAR_18 += VAR_15->length;
  }

  FUNC_3(VAR_13, VAR_7, VAR_20);
  FUNC_4(VAR_13, VAR_6,
          VAR_19);
  FUNC_3(VAR_13, VAR_8,
          VAR_15->length);

  ++VAR_15;
 }

 VAR_21 = FUNC_8(VAR_14, VAR_2, VAR_12, VAR_18, ((void*)0), 0, ((void*)0));
out:
 FUNC_9();

 return VAR_21;
}
