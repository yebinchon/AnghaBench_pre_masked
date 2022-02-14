
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int sectorsize; } ;
struct atmel_pmecc_user_req {TYPE_1__ ecc; } ;
typedef struct atmel_pmecc_gf_tables {void* alpha_to; void* index_of; } const atmel_pmecc_gf_tables ;


 int VAR_0 ;
 struct atmel_pmecc_gf_tables const* FUNC_0 (int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (unsigned int,unsigned int,struct atmel_pmecc_gf_tables const*) ;
 int FUNC_2 (struct atmel_pmecc_gf_tables const*) ;
 struct atmel_pmecc_gf_tables const* FUNC_3 (int,int ) ;

__attribute__((used)) static const struct atmel_pmecc_gf_tables *
FUNC_4(const struct atmel_pmecc_user_req *VAR_8)
{
 struct atmel_pmecc_gf_tables *VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12;
 int VAR_13;

 if (VAR_8->ecc.sectorsize == 512) {
  VAR_11 = VAR_4;
  VAR_10 = VAR_2;
  VAR_12 = VAR_7;
 } else {
  VAR_11 = VAR_5;
  VAR_10 = VAR_3;
  VAR_12 = VAR_6;
 }

 VAR_9 = FUNC_3(sizeof(*VAR_9) +
       (2 * VAR_12 * sizeof(u16)),
       VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->alpha_to = (void *)(VAR_9 + 1);
 VAR_9->index_of = VAR_9->alpha_to + VAR_12;

 VAR_13 = FUNC_1(VAR_11, VAR_10, VAR_9);
 if (VAR_13) {
  FUNC_2(VAR_9);
  return FUNC_0(VAR_13);
 }

 return VAR_9;
}
