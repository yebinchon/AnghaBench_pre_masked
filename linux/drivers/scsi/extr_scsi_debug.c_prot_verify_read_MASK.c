
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct t10_pi_tuple {scalar_t__ app_tag; } ;
struct scsi_cmnd {int dummy; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct scsi_cmnd*,scalar_t__,unsigned int,int) ;
 int VAR_0 ;
 struct t10_pi_tuple* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct t10_pi_tuple*,int ,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_2, sector_t VAR_3,
       unsigned int VAR_4, u32 VAR_5)
{
 unsigned int VAR_6;
 struct t10_pi_tuple *VAR_7;
 sector_t VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++, VAR_5++) {
  int VAR_9;

  VAR_8 = VAR_3 + VAR_6;
  VAR_7 = FUNC_2(VAR_8);

  if (VAR_7->app_tag == FUNC_0(0xffff))
   continue;

  VAR_9 = FUNC_3(VAR_7, FUNC_4(VAR_8), VAR_8, VAR_5);
  if (VAR_9) {
   VAR_0++;
   return VAR_9;
  }
 }

 FUNC_1(VAR_2, VAR_3, VAR_4, 1);
 VAR_1++;

 return 0;
}
