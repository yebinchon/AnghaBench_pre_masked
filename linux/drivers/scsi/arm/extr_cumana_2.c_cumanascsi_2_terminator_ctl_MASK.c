
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cumanascsi2_info {int terms; scalar_t__ base; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct Scsi_Host *VAR_3, int VAR_4)
{
 struct cumanascsi2_info *VAR_5 = (struct cumanascsi2_info *)VAR_3->hostdata;

 if (VAR_4) {
  VAR_5->terms = 1;
  FUNC_0(VAR_1, VAR_5->base + VAR_2);
 } else {
  VAR_5->terms = 0;
  FUNC_0(VAR_0, VAR_5->base + VAR_2);
 }
}
