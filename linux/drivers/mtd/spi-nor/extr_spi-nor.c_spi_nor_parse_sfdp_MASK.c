
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor_flash_parameter {int dummy; } ;
struct spi_nor {struct device* dev; } ;
struct sfdp_parameter_header {scalar_t__ major; scalar_t__ minor; scalar_t__ length; } ;
struct sfdp_header {scalar_t__ major; int nph; struct sfdp_parameter_header bfpt_header; int signature; } ;
struct device {int dummy; } ;
typedef int header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sfdp_parameter_header const*) ;

 scalar_t__ VAR_5 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct sfdp_parameter_header*) ;
 struct sfdp_parameter_header* FUNC_4 (size_t,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct spi_nor*,struct sfdp_parameter_header const*,struct spi_nor_flash_parameter*) ;
 int FUNC_7 (struct spi_nor*,struct sfdp_parameter_header const*,struct spi_nor_flash_parameter*) ;
 int FUNC_8 (struct spi_nor*,struct sfdp_parameter_header const*,struct spi_nor_flash_parameter*) ;
 int FUNC_9 (struct spi_nor*,int,size_t,struct sfdp_parameter_header*) ;
 int FUNC_10 (struct spi_nor*,int ,int,struct sfdp_header*) ;

__attribute__((used)) static int FUNC_11(struct spi_nor *VAR_6,
         struct spi_nor_flash_parameter *VAR_7)
{
 const struct sfdp_parameter_header *VAR_8, *VAR_9;
 struct sfdp_parameter_header *VAR_10 = ((void*)0);
 struct sfdp_header VAR_11;
 struct device *VAR_12 = VAR_6->dev;
 size_t VAR_13;
 int VAR_14, VAR_15;


 VAR_15 = FUNC_10(VAR_6, 0, sizeof(VAR_11), &VAR_11);
 if (VAR_15 < 0)
  return VAR_15;


 if (FUNC_5(VAR_11.signature) != VAR_5 ||
     VAR_11.major != VAR_4)
  return -VAR_0;





 VAR_9 = &VAR_11.bfpt_header;
 if (FUNC_0(VAR_9) != VAR_3 ||
     VAR_9->major != VAR_4)
  return -VAR_0;
 if (VAR_11.nph) {
  VAR_13 = VAR_11.nph * sizeof(*VAR_10);

  VAR_10 = FUNC_4(VAR_13, VAR_2);
  if (!VAR_10)
   return -VAR_1;

  VAR_15 = FUNC_9(VAR_6, sizeof(VAR_11),
     VAR_13, VAR_10);
  if (VAR_15 < 0) {
   FUNC_1(VAR_12, "failed to read SFDP parameter headers\n");
   goto exit;
  }
 }





 for (VAR_14 = 0; VAR_14 < VAR_11.nph; VAR_14++) {
  VAR_8 = &VAR_10[VAR_14];

  if (FUNC_0(VAR_8) == VAR_3 &&
      VAR_8->major == VAR_4 &&
      (VAR_8->minor > VAR_9->minor ||
       (VAR_8->minor == VAR_9->minor &&
        VAR_8->length > VAR_9->length)))
   VAR_9 = VAR_8;
 }

 VAR_15 = FUNC_7(VAR_6, VAR_9, VAR_7);
 if (VAR_15)
  goto exit;


 for (VAR_14 = 0; VAR_14 < VAR_11.nph; VAR_14++) {
  VAR_8 = &VAR_10[VAR_14];

  switch (FUNC_0(VAR_8)) {
  case 128:
   VAR_15 = FUNC_8(VAR_6, VAR_8, VAR_7);
   break;

  case 129:
   VAR_15 = FUNC_6(VAR_6, VAR_8, VAR_7);
   break;

  default:
   break;
  }

  if (VAR_15) {
   FUNC_2(VAR_12, "Failed to parse optional parameter table: %04x\n",
     FUNC_0(VAR_8));






   VAR_15 = 0;
  }
 }

exit:
 FUNC_3(VAR_10);
 return VAR_15;
}
