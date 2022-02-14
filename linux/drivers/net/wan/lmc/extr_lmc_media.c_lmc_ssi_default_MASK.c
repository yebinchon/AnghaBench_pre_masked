
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* lmc_media; int lmc_miireg16; } ;
typedef TYPE_2__ lmc_softc_t ;
struct TYPE_9__ {int (* set_crc_length ) (TYPE_2__* const,int ) ;int (* set_speed ) (TYPE_2__* const,int *) ;int (* set_clock_source ) (TYPE_2__* const,int ) ;int (* set_link_status ) (TYPE_2__* const,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__* const,int ) ;
 int FUNC_1 (TYPE_2__* const,int ) ;
 int FUNC_2 (TYPE_2__* const,int ) ;
 int FUNC_3 (TYPE_2__* const,int *) ;
 int FUNC_4 (TYPE_2__* const,int ) ;

__attribute__((used)) static void
FUNC_5 (lmc_softc_t * const VAR_5)
{
  VAR_5->lmc_miireg16 = VAR_4;




  FUNC_0 (VAR_5, VAR_2);

  VAR_5->lmc_media->set_link_status (VAR_5, VAR_3);
  VAR_5->lmc_media->set_clock_source (VAR_5, VAR_0);
  VAR_5->lmc_media->set_speed (VAR_5, ((void*)0));
  VAR_5->lmc_media->set_crc_length (VAR_5, VAR_1);
}
