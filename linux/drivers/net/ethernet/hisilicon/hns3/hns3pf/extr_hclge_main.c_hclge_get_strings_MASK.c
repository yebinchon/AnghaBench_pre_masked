
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef scalar_t__ u32 ;
struct hnae3_handle {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_1 (scalar_t__,int ,int,char*) ;
 char* FUNC_2 (struct hnae3_handle*,char*) ;
 int * VAR_12 ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hnae3_handle *VAR_13, u32 VAR_14,
         u8 *VAR_15)
{
 u8 *VAR_16 = (char *)VAR_15;
 int VAR_17;

 if (VAR_14 == VAR_1) {
  VAR_17 = FUNC_0(VAR_11);
  VAR_16 = FUNC_1(VAR_14, VAR_11,
        VAR_17, VAR_16);
  VAR_16 = FUNC_2(VAR_13, VAR_16);
 } else if (VAR_14 == VAR_2) {
  if (VAR_13->flags & VAR_7) {
   FUNC_3(VAR_16, VAR_12[VAR_3],
          VAR_0);
   VAR_16 += VAR_0;
  }
  if (VAR_13->flags & VAR_10) {
   FUNC_3(VAR_16, VAR_12[VAR_6],
          VAR_0);
   VAR_16 += VAR_0;
  }
  if (VAR_13->flags & VAR_9) {
   FUNC_3(VAR_16,
          VAR_12[VAR_4],
          VAR_0);
   VAR_16 += VAR_0;
  }
  if (VAR_13->flags & VAR_8) {
   FUNC_3(VAR_16, VAR_12[VAR_5],
          VAR_0);
   VAR_16 += VAR_0;
  }
 }
}
