
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int,char*,int ,int ,int ,...) ;
 int VAR_3 ;
 char const* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static const char *FUNC_1(struct Scsi_Host *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_0(VAR_4, VAR_0, "%s: version %s [%s]\n",
        VAR_2, VAR_1, VAR_7);
 if (VAR_10 >= (VAR_0 - 1))
  return VAR_4;
 FUNC_0(VAR_4 + VAR_10, VAR_0 - VAR_10,
    "  dev_size_mb=%d, opts=0x%x, submit_queues=%d, %s=%d",
    VAR_3, VAR_5, VAR_8,
    "statistics", (int)VAR_6);
 return VAR_4;
}
