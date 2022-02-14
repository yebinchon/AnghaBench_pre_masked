
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {char const* scsi_name; } ;
struct Scsi_Host {int dummy; } ;


 struct us_data* FUNC_0 (struct Scsi_Host*) ;

__attribute__((used)) static const char* FUNC_1(struct Scsi_Host *VAR_0)
{
 struct us_data *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->scsi_name;
}
