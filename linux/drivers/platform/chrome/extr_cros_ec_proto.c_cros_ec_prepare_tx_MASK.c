
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cros_ec_device {int proto_version; int* dout; } ;
struct cros_ec_command {int outsize; int version; int command; int* data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cros_ec_device*,struct cros_ec_command*) ;

int FUNC_2(struct cros_ec_device *VAR_4,
         struct cros_ec_command *VAR_5)
{
 u8 *VAR_6;
 u8 VAR_7;
 int VAR_8;

 if (VAR_4->proto_version > 2)
  return FUNC_1(VAR_4, VAR_5);

 FUNC_0(VAR_5->outsize > VAR_3);
 VAR_6 = VAR_4->dout;
 VAR_6[0] = VAR_0 + VAR_5->version;
 VAR_6[1] = VAR_5->command;
 VAR_6[2] = VAR_5->outsize;
 VAR_7 = VAR_6[0] + VAR_6[1] + VAR_6[2];
 for (VAR_8 = 0; VAR_8 < VAR_5->outsize; VAR_8++)
  VAR_7 += VAR_6[VAR_1 + VAR_8] = VAR_5->data[VAR_8];
 VAR_6[VAR_1 + VAR_5->outsize] = VAR_7;

 return VAR_2 + VAR_5->outsize;
}
