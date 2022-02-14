
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_stream_runtime {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdw_stream_runtime*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct sdw_stream_runtime*) ;
 int FUNC_3 (struct sdw_stream_runtime*) ;

int FUNC_4(struct sdw_stream_runtime *VAR_1)
{
 int VAR_2;

 if (!VAR_1) {
  FUNC_1("SoundWire: Handle not found for stream\n");
  return -VAR_0;
 }

 FUNC_2(VAR_1);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  FUNC_1("De-prepare for stream:%d failed: %d\n", VAR_2, VAR_2);

 FUNC_3(VAR_1);
 return VAR_2;
}
